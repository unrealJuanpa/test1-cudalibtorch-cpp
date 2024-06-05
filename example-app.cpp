#include <torch/torch.h>
#include <iostream>

int main() {
  torch::Tensor tensor = torch::rand({2, 3}, torch::kCUDA);
  std::cout << tensor << std::endl;
  std::cout << "Hola desde LibTorch C++!\n";
  return 0;
}
