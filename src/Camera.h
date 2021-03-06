#ifndef CAMERA_H_
#define CAMERA_H_

#include <memory>

#include "Utils/Types.h"
#include "Entity.h"

class Camera
{
public:
	Camera(int screenWidth, int screenHeight, const Vec2& center = Vec2(0, 0));
	
	void setCenter(const Vec2& center);

	Rect_t world2camera(Rect_t rect);
	Vec2 world2camera(Vec2 point);

	Rect_t camera2world(Rect_t rect);
	Vec2 camera2world(Vec2 point);

	void setCameraRect(Rect_t rect);
	//void setCameraCenter(SDL_Point point);
	void setCameraFactor(float x, float y);

	Vec2 zoomFactor();
	float zoomFactorX();
	float zoomFactorY();
	
private:
	EntityPtr	m_entity;

	int			m_screenWidth;
	int			m_screenHeight;

	Vec2		m_topleft;

	float		m_zoomFactorX, m_zoomFactorY; // zoom factor of camera, is equal to screenSize / cameraSize 
};

typedef std::shared_ptr<Camera> CameraPtr;

#endif //CAMERA_H_
