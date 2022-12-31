#include "Point.hpp"

#define abs(m) (((m) < 0) ? -m : m)

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float ax = a.getX().toFloat();
	float ay = a.getY().toFloat();
	float bx = b.getX().toFloat();
	float by = b.getY().toFloat();
	float cx = c.getX().toFloat();
	float cy = c.getY().toFloat();
	float px = point.getX().toFloat();
	float py = point.getY().toFloat();

	float main_area = 0.5 * (abs(((ax * by + bx * cy + cx * ay) - (bx * ay + cx * by + ax * cy))));
	float area1 = 0.5 * (abs(((ax * py + px * cy + cx * ay) - (px * ay + cx * py + ax * cy))));
	float area2 = 0.5 * (abs(((px * by + bx * cy + cx * py) - (bx * py + cx * by + px * cy))));
	float area3 = 0.5 * (abs(((ax * by + bx * py + px * ay) - (bx * ay + px * by + ax * py))));
	float point_area = area1 + area2 + area3;

	float m_ac = (ay - cy) / (ax - cx);
	float m_bc = (by - cy) / (bx - cx);
	float m_ab = (ay - by) / (ax - bx);

	float m_ap = (ay - py) / (ax - px);
	float m_bp = (by - py) / (bx - px);
	float m_cp = (cy - py) / (cx - px);

	if (((m_ab == m_ap) || (m_ac == m_ap) ||
		 (m_bc == m_cp) || (m_ac == INFINITY || m_ab == INFINITY || m_bc == INFINITY)) ||
		(m_cp == INFINITY || m_bp == INFINITY || m_ap == INFINITY))
		return false;
	else
	{
		if (point_area == main_area)
		{
			return true;
		}
	}
	return false;
}

