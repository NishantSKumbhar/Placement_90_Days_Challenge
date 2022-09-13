#include<iostream>
// only global , can't
namespace bluesky{
    int a = 12;

}
namespace bluesky{
    int b = 12;
    //int a = 10;

}
namespace brooklyn{
    int a = 13;

}

int main(){

    std::cout<<bluesky::a<<std::endl;
    std::cout<<bluesky::b<<std::endl;
    std::cout<<brooklyn::a;
    return 0;
}
