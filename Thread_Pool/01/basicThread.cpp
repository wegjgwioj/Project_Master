#include <iostream> // 库
#include <thread>  //线程
#include <mutex> // 互斥锁
using namespace std; // 命名空间
void print_hello(int id) { // 函数
    cout << "Hello from thread " << id << endl;// 输出
}

int main() {
    thread t1(print_hello, 1);// 创建线程 t1
    thread t2(print_hello, 2);// 创建线程 t2
    thread t3(print_hello, 3);// 创建线程 t3
    thread t4(print_hello, 4);// 创建线程 t4

    t1.join();// 等待线程结束 
    t2.join();// 等待线程结束
    t3.join();//  等待线程结束
    t4.join();// 等待线程结束

    return 0;
}
/**Note：
 * 
 * 观察现象：每次运行输出的顺序可能不同，但是每个线程都会输出一次
 * 原因：线程的执行是并发的，每个线程都有自己的执行空间，所以输出的顺序可能不同
 */
