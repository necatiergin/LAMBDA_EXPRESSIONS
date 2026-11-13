#include <cstdio>
#include <memory>

using FilePtr = std::unique_ptr<
    std::FILE,
    decltype([](std::FILE* fp) {
        if (fp)
            std::fclose(fp);
    })
>;

int main()
{
    FilePtr file{std::fopen("data.txt", "w")};

    if (file)
        std::fputs("Hello C++20\n", file.get());
}
