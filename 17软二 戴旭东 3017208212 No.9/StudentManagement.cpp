#include <iostream>
#include <cstdlib>
#include <fstream>  //需要进行文件读写
#include <iomanip> //需要调用cout<<setprecision
#include<cstring>//需要调用字符串函数
using namespace std;

//定义结构体
struct STU
{
    int num; //学号
    char name[20]; // 姓名(不超过19个字符)
    char sex ;  // 'M’表示男生，'F’ 表示女生
    float score[3]; //数学、语文、英语三门课的成绩
    float ave;// 平均分:用于计算后保存(不需要输入)
};


/////////////////////////////
//函数的声明
// alloc(）函数:
//动态扩增pstu所指STU类型的“数组”的空间，扩增newElemCount个(默认1个)元素
// pstu是指针类型的参数，且引用传递，在函数内将修改pstu 的值，使其指向扩增空间后的新空间首地址
// n为原始pstu所指“数组”的元素个数，扩增后元素个数将为n+newE1emCount
//成功返回扩增空间后的新数组的元素个数，失败返回0
int alloc(STU * &pstu, int n, int newElemCount = 1)
{
    STU *pbuff = nullptr;    // 临时缓冲空间，pbuff保存空间首地址
    int i;
    pbuff = new STU [n + newElemCount] ;
    if (pbuff == nullptr) { return 0; }
    if (pstu != NULL)
    {
        for (i = 0; i < n; i++)
        {
            pbuff[i] = pstu[i];
        }
        delete[] pstu;
        //使pstu指向新空间(pstu为引用传递，将同时修改主调函数中此指针变量的值)
        pstu = pbuff;
        //成功返回新空间的元素个数
        return n + newElemCount;
    }
}
// input()函数:
//新增(输入)一个学生信息。存入pStuNew 所指向的一个STU 类型的空间中
// 成功返回true, 失败返回false
bool input(STU * pStuNew)
{
    cout << "\n请输入要新增学生的信息" << endl;
    //输入学号
    cin. clear();             //清除之前cin中的任何错误标志
    cin. ignore(1024, '\n'); // 丢掉缓冲区中’\n'前足够多的字符，即丢掉本行内容
    cout << "学号:";
    cin >> pStuNew -> num;

    //输入姓名
    cin. clear();
    cin. ignore(1024, '\n' );
    cout << "姓名:";
    cin >> pStuNew->name;

    //输入性别
    cin. clear();
    cin. ignore(1024, '\n' );
    cout << "性别(M/F):";
    cin >> pStuNew->sex;

    if (pStuNew->sex >= 'a' && pStuNew->sex <= 'z' )

    {
        pStuNew->sex -= 32;  // 规范为大写字母
    }

    //输入三门课的成绩
    int j;
    for (j = 0; j < 3; j++)
    {
        cin. clear();
        cin. ignore(1024, '\n' );
        switch (j)
        {
        case 0:
            cout << "数学成绩:";
            break;
        case 1:
            cout << "语文成绩:";
            break;
        case 2:
            cout << "英语成绩:";
            break;
        }
        cin >> pStuNew -> score[j];
    }

    //自劫计算刚输入学生的三门课平均分，存入pStuNew->average;
    float sum = 0.0;

    for (j = 0; j < 3; j++)
    {
        sum += pStuNew->score[j];
    }
    pStuNew->ave = sum / 3;
    return true;
}

// list()函数:列表显示当前所有学生的信息
void list (struct STU * pstu,  int n)
{
    int i, j;
    if (pstu == NULL)
    {
        cout << "\n当前没有学生。" << endl;
    }
    else
    {
        cout << "\n\n学号\t姓名\t性别\t数学\t语文\t英语\t平均" << endl;
        cout << "-------------------------------------------------------" << endl;

        //显示每位学生信息
        // pstu是指针变量，在这里看作数组来用，写成：pstu[i]
        for (i = 0; i < n; i++)
        {
            cout << pstu[i].num << "\t";
            cout << pstu[i].name << "\t";
            cout << pstu[i].sex << "\t";
            for (j = 0; j < 3; j++)
            {
                cout << pstu[i].score[j] << "\t";
            }
            // setprecision(4)设置为显示4位有效数字
            cout << setprecision(4) << pstu[i]. ave << endl;
        }
        //显示学生总数
        cout << "\n当前" << n << "个学生。" << endl;
    }      // end if (pstu==NULL) - else

}


//控二  朱梦 2019/1/13 16:51:07

int main()
{
    struct STU * pstu = NULL;//动态分配学生信息数组空间，pstu用来保存空间首地址
    int iCountStu = 0;//共有学生总数
    int menu = 0; //定义用户所选菜单项
    int mm = 0, index = 0, i = 0; //定义临时变量
    cout << "\t\t\t*************************" << endl;
    cout << "\t\t\t欢迎使用学生成绩管理系统" << endl;
    cout << "\t\t\t*************************" << endl;

    while (1) //死循环，会循环显示菜单和执行功能
    {
        cout << endl;
        cout << "\t主菜单" << endl;
        cout << "==============================" << endl;
        cout << "1.新增\t\t5.排序" << endl;
        cout << "2.查看\t\t6.统计" << endl;
        cout << "3.删除\t\t7.存盘文件" << endl;
        cout << "4.查找\t\t8.加载文件" << endl;
        cout << "其他，退出系统。。。" << endl;
        cout << "请选择";
        cin >> menu;
        switch (menu)
        {
        case 1:   //新增
            //新扩增一个学生信息空间
            //扩增新空间后的新“数組”首地址存入pstu
            //新空间元素个数(返回值)存入iCountStu
            iCountStu = alloc(pstu, iCountStu);
            if (iCountStu == 0)
            {
                cout << "扩增存储空间失败！" << endl;
            }
            else
            {
                if ( input(pstu + iCountStu - 1) )   // pstutiCountStu-1为数组最后一个空间的地址
                {
                    cout << "\n新增成功!当前" << iCountStu << "个学生。\n";
                }
                else
                {
                    cout << "新增学生失败! " << endl;
                }
            }
            break;

        case 2:        //査看

            list (pstu, iCountStu);
            break;
            break;
        case 3:    //删除
            break;
        case 4:    //查找
            break ;
        case 5:    //排序
            cout << "\n1=按学号排序\t2=按姓名排序\t3=按平均分排序\n";
            cout << "请选择：";
            cin >> i;
            break;//跳出外层switch即主菜単的switch
        case 6:  //統汁
            break;
        case 7:   //保存文件
            break ;
        case 8:    //加载文件
            break ;
        default:
            cout << "谢谢使用!再見! " << endl;
            break ;
        }    //end of switch
        if (menu < 1 || menu > 8)
        {
            break;    //跳出死循环
        }
    }  // end of while(1)
    //释放空间(由于pstu指向数组，在delete 中必须加[])
    delete [] pstu;
    return 0;
}
