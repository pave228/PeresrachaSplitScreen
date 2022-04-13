﻿#pragma once


// Просмотр MyView

class MyView : public CView
{
	DECLARE_DYNCREATE(MyView)

protected:
	MyView();           // защищенный конструктор, используемый при динамическом создании
	virtual ~MyView();

public:
	virtual void OnDraw(CDC* pDC);      // для отрисовки этого представления
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	DECLARE_MESSAGE_MAP()
};


