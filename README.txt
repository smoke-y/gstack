GSTACK
A stack for building games for WINDOWS, LINUX, and ANDROID

----ANDROID----
Building for android sucks. It makes me paranoid android

1) local.properties
ndk.dir = absolute_path_to_ndk
cmake.dir = absolute_path_to_CMake(this folder should contain "bin/" which should contain cmake and ninja)

2) app/build.gradle
ndkVersion = "whatever_version_in_your_local_machine"