#################################
#update the system, get it ready to install
#################################
sudo apt-get update -y
sudo apt-get upgrade -y

#################################
#ACE prereqs
#################################
sudo apt-get install gcc -y
sudo apt-get install g++ -y
sudo apt-get install mpic++ -y
sudo apt-get install make -y
sudo apt-get install qt5-default -y
sudo apt-get install nvidia-cuda-dev -y

#################################
#ACE install (develop branch)
#################################
#clone ACE repo
cd ~/
git clone https://github.com/SystemsGenetics/ACE.git ~/ACE
cd ~/ACE/build
git checkout develop

#set up for build
export ACE_VERSION=v3.1.0
export INSTALL_PREFIX="~/software"
qmake ../src/ACE.pro PREFIX=$INSTALL_PREFIX/ACE-$ACE_VERSION

#build ACE
make qmake_all
make -j13
make qmake_all
sudo make install

#append to .bashrc
echo "" >> ~/.bashrc
echo "#ACE include paths" >> ~/.bashrc
echo "export PATH=$INSTALL_PREFIX/ACE-$ACE_VERSION/bin:\$PATH" >> ~/.bashrc
echo "export CPLUS_INCLUDE_PATH=$INSTALL_PREFIX/ACE-$ACE_VERSION/include:\$CPLUS_INCLUDE_PATH" >> ~/.bashrc
echo "export LIBRARY_PATH=$INSTALL_PREFIX/ACE-$ACE_VERSION/lib:\$LIBRARY_PATH" >> ~/.bashrc
echo "export LD_LIBRARY_PATH=$INSTALL_PREFIX/ACE-$ACE_VERSION/lib:\$LD_LIBRARY_PATH" >> ~/.bashrc
echo "export CPATH=$INSTALL_PREFIX/ACE-$ACE_VERSION/include:\$CPATH" >> ~/.bashrc
echo "export C_INCLUDE_PATH=$INSTALL_PREFIX/ACE-$ACE_VERSION/include:\$C_INCLUDE_PATH" >> ~/.bashrc
echo "export OBJC_INCLUDE_PATH=$INSTALL_PREFIX/ACE-$ACE_VERSION/include:\$OBJC_INCLUDE_PATH" >> ~/.bashrc

#append to .profile
echo "" >> ~/.bashrc
echo "#ACE include paths" >> ~/.profile
echo "export PATH=$INSTALL_PREFIX/ACE-$ACE_VERSION/bin:\$PATH" >> ~/.profile
echo "export CPLUS_INCLUDE_PATH=$INSTALL_PREFIX/ACE-$ACE_VERSION/include:\$CPLUS_INCLUDE_PATH" >> ~/.profile
echo "export LIBRARY_PATH=$INSTALL_PREFIX/ACE-$ACE_VERSION/lib:\$LIBRARY_PATH" >> ~/.profile
echo "export LD_LIBRARY_PATH=$INSTALL_PREFIX/ACE-$ACE_VERSION/lib:\$LD_LIBRARY_PATH" >> ~/.profile
echo "export CPATH=$INSTALL_PREFIX/ACE-$ACE_VERSION/include:\$CPATH" >> ~/.profile
echo "export C_INCLUDE_PATH=$INSTALL_PREFIX/ACE-$ACE_VERSION/include:\$C_INCLUDE_PATH" >> ~/.profile
echo "export OBJC_INCLUDE_PATH=$INSTALL_PREFIX/ACE-$ACE_VERSION/include:\$OBJC_INCLUDE_PATH" >> ~/.profile

#set env to see ACE libs
export PATH=$INSTALL_PREFIX/ACE-$ACE_VERSION/bin:$PATH
export CPLUS_INCLUDE_PATH=$INSTALL_PREFIX/ACE-$ACE_VERSION/include:$CPLUS_INCLUDE_PATH
export LIBRARY_PATH=$INSTALL_PREFIX/ACE-$ACE_VERSION/lib:$LIBRARY_PATH
export LD_LIBRARY_PATH=$INSTALL_PREFIX/ACE-$ACE_VERSION/lib:$LD_LIBRARY_PATH
export CPATH=$INSTALL_PREFIX/ACE-$ACE_VERSION/include:$CPATH
export C_INCLUDE_PATH=$INSTALL_PREFIX/ACE-$ACE_VERSION/include:$C_INCLUDE_PATH
export OBJC_INCLUDE_PATH=$INSTALL_PREFIX/ACE-$ACE_VERSION/include:$OBJC_INCLUDE_PATH

cd ~/