#ifndef TEXTURE_H_
#define TEXTURE_H_

#include <string>
#include <memory>

#include "Utils/SDL_platform.h"

class Texture;

typedef std::shared_ptr<Texture> TexturePtr;
typedef SDL_Texture* TextureHandle; 

class Texture
{
public:
	Texture();
	Texture(TextureHandle texture, int w = 0, int h = 0);
	~Texture();

	void	SetRenderer(SDL_Renderer* renderer);
	void	loadImage(const std::string& path);

	//void render( int x, int y);
	
	//std::shared_ptr<Texture>	scaleTexture(int new_width, int new_heigh);
	SDL_Rect	rect() const; 
	TextureHandle textureHandle() const;

	int width() const;
	int height() const;

private:
	//The actual hardware texture
	TextureHandle m_texture;

	SDL_Renderer* m_renderer;
	SDL_Rect m_rect;
};

SDL_Surface* loadSurface( const std::string& path, SDL_PixelFormat* format = NULL);

#endif // TEXTURE_H_
