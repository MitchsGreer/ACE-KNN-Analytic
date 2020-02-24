

cd build/
export INSTALL_PREFIX="~/software"
qmake ../src/KNN.pro PREFIX=$INSTALL_PREFIX/KNN
make qmake_all
make
make qmake_all
sudo make install