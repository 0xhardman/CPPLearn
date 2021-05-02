#include<iostream>
struct Sale_data
{
    std::string isbn;
    unsigned units_sold = 0;
    double price = 0.0;
    double revenue = 0.0;
};
//1.5.1
//int main() {
//    Sale_data data;
//    while (std::cin >> data.isbn >> data.units_sold >> data.price) {
//        data.revenue = data.units_sold * data.price;
//        std::cout << data.isbn 
//            << " "<< data.units_sold 
//            << " " << data.revenue 
//            << " " << data.price
//            << std::endl;
//    }
//	return 0;
//}
//1.5.2
//int main() {
//    Sale_data data1, data2;
//    std::cin >> data1.isbn >> data1.units_sold >> data1.price;
//    std::cin >> data2.isbn >> data2.units_sold >> data2.price;
//    data1.revenue = data1.price * data1.units_sold;
//    data2.revenue = data2.price * data2.units_sold;
//    Sale_data sum;
//    if (data1.isbn == data2.isbn) {
//        sum.isbn = data1.isbn;
//        sum.units_sold = data1.units_sold + data2.units_sold;
//        sum.revenue = data1.revenue + data2.revenue;
//        sum.price = sum.revenue / sum.units_sold;
//    }
    //std::cout << sum.isbn << " "
    //    << sum.units_sold << " "
    //    << sum.revenue << " "
    //    << sum.price << std::endl;
//    
//    return 0;
//}

//1.6
int main() {
    Sale_data total, curr;
    if (std::cin >> total.isbn >> total.units_sold >> total.price) {
        total.revenue = total.units_sold * total.price;
        while (std::cin >> curr.isbn >> curr.units_sold >> curr.price) {
            if (total.isbn == curr.isbn) {
                curr.revenue = curr.units_sold * curr.price;
                total.revenue += curr.revenue;
                total.units_sold += curr.units_sold;
                total.price = total.revenue / total.units_sold;
            }
            else {
                std::cout << total.isbn << " "
                    << total.units_sold << " "
                    << total.revenue << " "
                    << total.price << std::endl;
                total.isbn = curr.isbn;
                total.units_sold = curr.units_sold;
                total.price = curr.price;
                total.revenue=curr.price*curr.units_sold;
            }
            
        }
        std::cout << total.isbn << " "
            << total.units_sold << " "
            << total.revenue << " "
            << total.price << std::endl;
    }
    else {
        std::cout << "数据量不足" << std::endl;
    }
}