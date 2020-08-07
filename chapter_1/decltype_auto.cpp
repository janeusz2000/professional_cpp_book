int main() {

    int x = 5;
    decltype(x) super = 7; // super  is now integer
    auto y = &x; // this creates copy
    auto& z = x; // this create reference;
}