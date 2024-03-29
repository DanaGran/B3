#include <iostream>
#include <vector>

int main(){

    double x;
    std::vector<double>v;

    while( std::cin>>x){

        v.push_back(x);

    }
    for( int i = 0 ; i < v.size() / 2 ; i++){

        double aux;
        aux=v[i];
        v[i]=v[ v.size()/2 + i ];
        v[ v.size()/2 + i ]= aux;

    }

    for( auto i:v )std::cout<<i<<" ";
    return 0;
}
