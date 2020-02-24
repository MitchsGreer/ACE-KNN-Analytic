

cd build/
qmake ../src/KNN.pro PREFIX=~/software
make qmake_all
make
make qmake_all
sudo make install