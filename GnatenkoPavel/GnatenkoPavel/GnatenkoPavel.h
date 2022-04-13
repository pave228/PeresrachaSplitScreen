
// GnatenkoPavel.h: основной файл заголовка для приложения GnatenkoPavel
//
#pragma once

#ifndef __AFXWIN_H__
	#error "включить pch.h до включения этого файла в PCH"
#endif

#include "resource.h"       // основные символы


// CGnatenkoPavelApp:
// Сведения о реализации этого класса: GnatenkoPavel.cpp
//

class CGnatenkoPavelApp : public CWinApp
{
public:
	CGnatenkoPavelApp() noexcept;


// Переопределение
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Реализация
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CGnatenkoPavelApp theApp;
