
// GnatenkoPavelView.cpp: реализация класса CGnatenkoPavelView
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS можно определить в обработчиках фильтров просмотра реализации проекта ATL, эскизов
// и поиска; позволяет совместно использовать код документа в данным проекте.
#ifndef SHARED_HANDLERS
#include "GnatenkoPavel.h"
#endif

#include "GnatenkoPavelDoc.h"
#include "GnatenkoPavelView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CGnatenkoPavelView

IMPLEMENT_DYNCREATE(CGnatenkoPavelView, CView)

BEGIN_MESSAGE_MAP(CGnatenkoPavelView, CView)
	// Стандартные команды печати
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// Создание или уничтожение CGnatenkoPavelView

CGnatenkoPavelView::CGnatenkoPavelView() noexcept
{
	// TODO: добавьте код создания

}

CGnatenkoPavelView::~CGnatenkoPavelView()
{
}

BOOL CGnatenkoPavelView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: изменить класс Window или стили посредством изменения
	//  CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// Рисование CGnatenkoPavelView

void CGnatenkoPavelView::OnDraw(CDC* /*pDC*/)
{
	CGnatenkoPavelDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: добавьте здесь код отрисовки для собственных данных
}


// Печать CGnatenkoPavelView

BOOL CGnatenkoPavelView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// подготовка по умолчанию
	return DoPreparePrinting(pInfo);
}

void CGnatenkoPavelView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: добавьте дополнительную инициализацию перед печатью
}

void CGnatenkoPavelView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: добавьте очистку после печати
}


// Диагностика CGnatenkoPavelView

#ifdef _DEBUG
void CGnatenkoPavelView::AssertValid() const
{
	CView::AssertValid();
}

void CGnatenkoPavelView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CGnatenkoPavelDoc* CGnatenkoPavelView::GetDocument() const // встроена неотлаженная версия
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CGnatenkoPavelDoc)));
	return (CGnatenkoPavelDoc*)m_pDocument;
}
#endif //_DEBUG


// Обработчики сообщений CGnatenkoPavelView
