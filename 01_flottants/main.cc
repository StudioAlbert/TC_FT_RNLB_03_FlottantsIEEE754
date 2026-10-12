#include <iostream>
#include <print>

int main() {
    // double my_float = -6.5f;
    // double my_float_10 = 140.0;
    // my_float += 1;
    // my_float *= -1;
    // std::println("Hello, Float {} !", my_float);
    //
    // auto bits = std::bit_cast<std::uint32_t>(-6.5f);
    // std::cout << std::format("{:0b}\n", bits);                            // 41480000
    // std::cout << std::bit_cast<float>(std::uint32_t{0xC0D00000}) << '\n';

    float zero = 0;
    float div_zero = zero / zero;

    float add = zero + div_zero;

    if (std::isnan(add)) {

    }

    float temps = 0.0f;
    for (int frame = 0; frame < 60 * 60 * 60; ++frame)   // 1 h de jeu à 60 images/s
    {
        temps += 1.0f / 60.0f;                            // 0,016666… arrondi à chaque ajout
    }
    std::println("{}", temps);

    return 0;
}
