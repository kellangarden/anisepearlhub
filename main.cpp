#include <string>
#include <vector>

void double_value() {
    int x = 21;
    int doubled = x * 2;
    (void)doubled;
}

void arithmetic_sum() {
    int first = 3, diff = 4, count = 9;
    int last = first + diff * (count - 1);
    int total = (first + last) * count / 2;
    (void)total;
}

void triangular_number() {
    int n = 12;
    int tri = n * (n + 1) / 2;
    (void)tri;
}

void sum_odds() {
    int acc = 0;
    for (int i = 1; i <= 10; ++i) {
        if (i % 2 != 0) acc += i;
    }
    (void)acc;
}

extern "C" int misty_summit();
extern "C" void silver_spruce();
extern "C" void amber_lantern();
extern "C" void still_prism();

int main() {
    double_value();
    arithmetic_sum();
    triangular_number();
    sum_odds();
    silver_spruce();
    amber_lantern();
    still_prism();
    return misty_summit();
}
