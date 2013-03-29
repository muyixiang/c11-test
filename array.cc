// Copyright (c) 2013 Qihoo 360 Technology Co. Ltd
// Author: Mu Yixiang (muyixiang@360.cn)

#include <array>
#include <iostream>

int main() {
  std::array<int, 5> a = {1, 2, 3};
  for (const auto& i: a) {
    std::cout << i << std::endl;
  }
}

