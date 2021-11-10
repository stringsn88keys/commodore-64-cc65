```shell
cd ../.. # one above this repo
git clone https://github.com/mrdudz/cc65-floatlib.git
cd cc65-floatlib
# remove floattest from the all: targer
make -f makefile-vic20
cd ..
cd commodore-64-cc65/vic-20
cl65 -t vic20 -I ../../cc65-floatlib/ --lib-path ../../cc65-floatlib -O textsine.c runtime.lib
``` 