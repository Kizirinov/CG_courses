#pragma once

#include <QtGui/QPainter>
#include "Vector2f.h"
#include "RectF.h"
// ����� PoolTableScene ��������� ����� ����������� �����, � �������� � ��������.
class PoolTableScene
{
public:
	explicit PoolTableScene(const RectF& bounds);
	void update(float deltaSeconds);
	void redraw(QPainter& painter);

private:

	Vector2f m_ballPosition;
	Vector2f m_ballSpeed;
	const Vector2f m_ballSize;
	const RectF m_bounds;

	float m_ballPositionX = 0;
	float m_ballPositionY = 0;
};