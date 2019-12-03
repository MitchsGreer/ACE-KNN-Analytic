__kernel void dist(__global const float *expressions, 
		  int geneSize, 
		  int sampleSize,
		  int index, 
		  int globalWorkSize,
		  __global float *outDists)
{
	//Make sure you are not operating outside of bounds
	int i = get_global_id(0);
	if(i >= globalWorkSize || index >= globalWorkSize)
	{
		return;
	}

	//initialize variables
	__global const float *geneIndex = &expressions[index * sampleSize];
	__global float *compareRow;


	for(int i = 0; i < geneSize - index; i++)
	{
		float dist = 0.0;
		float sum = 0.0;
		compareRow = &expressions[i * sampleSize];
		for(int j = 0; j < sampleSize; j++)
		{
			sum = compareRow[j] - geneIndex[j];
			if(sum < 0)
			{
				sum *= -1;
			}
			dist += sum;
		}
		
		outDists[i] = dist;
	}
	for(; i < geneSize; i++)
	{
	}
}
