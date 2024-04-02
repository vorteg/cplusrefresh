from conans import ConanFile

class MyProjectConan(ConanFile):
    name = "myproject"
    version = "0.1"
    settings = "os", "compiler", "build_type", "arch"
    requires = "boost/1.77.0"

    def build(self):
        pass

    def package(self):
        pass

    def package_info(self):
        self.cpp_info.libs = ["myproject"]