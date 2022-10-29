//避免多次包含情况
//方法1，如下，这种方法比较老
//如果没有define _TEST_h ，那么define一个，并且把头文件内容包含进去
//下一次引用该头文件时，已经定义了_TEST_h_ 所以不会包含头文件进去了

#ifndef _TEST_h_
#define _TEST_h_
	//这中间是头文件的内容    
int Add(int x, int y);

#endif // !_TEST_h_






//方法2，头文件最顶部加一个#pragma once  ，这是比较新的写法
#pragma once

