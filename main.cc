gRPC
/*
https://grpc.io/docs/languages/cpp/quickstart/
https://fuchsia.googlesource.com/third_party/grpc/+/refs/heads/cobalt/examples/cpp/helloworld/README.md
https://medium.com/@shradhasehgal/get-started-with-grpc-in-c-36f1f39367f4
https://github.com/grpc/grpc
https://github.com/grpc/grpc/tree/master/src/cpp
https://github.com/grpc/grpc/blob/master/BUILDING.md
https://grpc.io/docs/what-is-grpc/introduction/
https://grpc.io/docs/languages/cpp/basics/
https://fuchsia.googlesource.com/third_party/grpc/+/refs/heads/cobalt/INSTALL.md

grpc:
export MY_INSTALL_DIR=$HOME/.local
mkdir -p $MY_INSTALL_DIR
export PATH="$MY_INSTALL_DIR/bin:$PATH"
sudo apt install -y cmake
cmake --version
sudo apt install -y build-essential autoconf libtool pkg-config
git clone --recurse-submodules -b v1.73.0 --depth 1 --shallow-submodules https://github.com/grpc/grpc
cd grpc
mkdir -p cmake/build
pushd cmake/build
cmake -DgRPC_INSTALL=ON \
      -DgRPC_BUILD_TESTS=OFF \
      -DCMAKE_CXX_STANDARD=17 \
      -DCMAKE_INSTALL_PREFIX=$MY_INSTALL_DIR \
      ../..
make -j 4
make install
popd
cd examples/cpp/helloworld
mkdir -p cmake/build
pushd cmake/build
cmake -DCMAKE_PREFIX_PATH=$MY_INSTALL_DIR ../..
make -j 4
In examples/cpp/helloworld/cmake/build
./greeter_client
./greeter_server

Standalone Example:
?
//sudo apt  install protobuf-compiler
mkdir gen
//protoc --cpp_out=./gen/ stringreverse.proto
/home/user1/.local/bin/protoc --cpp_out=./gen/ stringreverse.proto
g++ \
-o client \
-Igen/ -I/home/user1/.local/include/ \
gen/stringreverse.pb.cc \
gen/stringreverse.pb.h \
example_client.cc \
-L/usr/local/lib -lpthread
TBD
?
*/
