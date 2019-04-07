#pragma once
/**
 * 上面那个等价于
 #ifndef __IRUNTIMEMODULE_H__
 #define __IRUNTIMEMODULE_H__
 <代码>

 #endif
 * */

#include "Interface.hpp"

namespace My {
	Interface IRuntimeModule{
public:
		// 虚函数的析构函数，对于有其他虚函数的类，建议把析构函数也声明为virtual，因为如果不这么作
		// 那么当使用基类指针释放派生类的实例时，可能导致只调用了基类的析构函数，从而产生了memory leak的情况.
		virtual ~IRuntimeModule() {};

		virtual int Initialize() = 0; // 用于初始化模块
		virtual void Finalize() = 0; // 用来在模块结束的时候打扫战场
		virtual void Tick() = 0; // 用来让驱动模块驱动该模块执行，每调用一次，模块进行一个单位的处理
	};
}

