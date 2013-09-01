QBitMessage
===========

Cross-platform BitMessage client for Linux, OS X &amp; Windows.


== Build Instructions ==

=== OS X ===

* Download, compile and install Botan 1.11 from http://botan.randombit.net/
```
cd botan-1.11
./configure.py --cc=clang
make
make install
```

* Download and compile QBitMessage
```
git clone https://github.com/dankrusi/QBitMessage.git
cd QBitMessage
qmake
make
```


== Project Status ==

In development


== Contact ==

Dan Krusi <dan.krusi@nerves.ch>
