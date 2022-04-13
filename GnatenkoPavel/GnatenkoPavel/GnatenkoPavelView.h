
// GnatenkoPavelView.h: интерфейс класса CGnatenkoPavelView
//

#pragma once
class CGnatenkoPavelDoc;

class CGnatenkoPavelView : public CView
{
protected: // создать только из сериализации
	CGnatenkoPavelView() noexcept;
	DECLARE_DYNCREATE(CGnatenkoPavelView)

// Атрибуты
public:
	CGnatenkoPavelDoc* GetDocument() const;

// Операции
public:

// Переопределение
public:
	virtual void OnDraw(CDC* pDC);  // переопределено для отрисовки этого представления
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Реализация
public:
	virtual ~CGnatenkoPavelView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Созданные функции схемы сообщений
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // версия отладки в GnatenkoPavelView.cpp
inline CGnatenkoPavelDoc* CGnatenkoPavelView::GetDocument() const
   { return reinterpret_cast<CGnatenkoPavelDoc*>(m_pDocument); }
#endif

