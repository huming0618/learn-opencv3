## Install
Reference http://www.pyimagesearch.com/2016/12/19/install-opencv-3-on-macos-with-homebrew-the-easy-way/

## Build 
```
g++ -I/usr/local/Cellar/opencv3/3.2.0/include main.cpp -L/usr/local/Cellar/opencv3/3.2.0/lib -lopencv_core -lopencv_highgui -lopencv_imgproc -lopencv_imgcodecs -o build/out
```
