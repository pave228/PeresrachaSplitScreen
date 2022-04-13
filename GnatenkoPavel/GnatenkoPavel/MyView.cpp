// MyView.cpp: файл реализации
//

#include "pch.h"
#include "GnatenkoPavel.h"
#include "MyView.h"


// MyView

IMPLEMENT_DYNCREATE(MyView, CView)

MyView::MyView()
{

}

MyView::~MyView()
{
}

BEGIN_MESSAGE_MAP(MyView, CView)
END_MESSAGE_MAP()


// Рисование MyView

void MyView::OnDraw(CDC* pDC)
{
	CDocument* pDoc = GetDocument();
	// TODO: добавьте код отрисовки
}


// Диагностика MyView

#ifdef _DEBUG
void MyView::AssertValid() const
{
	CView::AssertValid();
}

#ifndef _WIN32_WCE
void MyView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}
#endif
#endif //_DEBUG


// Обработчики сообщений MyView
