make clean
rm -f qpadfinal
rm -f Makefile
git pull origin corrector-version
qmake qpadfinal.pro
make
