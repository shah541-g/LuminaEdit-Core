#ifndef RENDERER_H
#define RENDERER_H
class Document;
class Cursor;
class Renderer
{
private:
  /* data */
public:
  Renderer(/* args */);
  ~Renderer();
  void drawDocument(Document& document);
  void drawCursor(Cursor& cursor);
  void drawTabs();
  void drawStatusBar();
};

Renderer::Renderer(/* args */)
{
}

Renderer::~Renderer()
{
}



#endif