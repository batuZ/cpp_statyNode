## CLI/C++ 

### .Net可以提供强大的类库支持，快速开发一些应用程序，与C++配合可以发挥强大的能力，CLI/C++则是两者联合的桥梁

/*  怎样创建C++/CLI程序
*  https://jingyan.baidu.com/article/acf728fd4af180f8e510a3c1.html
*
*  C++/CLI 实战技术收集（我讨厌MFC)
*  https://blog.csdn.net/wlanye/article/details/75007543
*
*  实例解析C++/CLI之开篇
*  https://blog.csdn.net/xieqidong/article/details/2244641
*/

/*
CLR创建winForm窗体
1、创建一个CLR控制台应用程序
2、头文件夹右键->添加新建项->UI->Windows窗体
3、main函数增加：
Application::EnableVisualStyles();
Application::Run(gcnew MyForm());
4、本地window调试器