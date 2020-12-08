#ifndef _RIVE_STAR_HPP_
#define _RIVE_STAR_HPP_
#include "generated/shapes/star_base.hpp"
#include <stdio.h>
namespace rive
{
	class Star : public StarBase
	{
	public:
		Star();
		void update(ComponentDirt value) override;

	protected:
		void innerRadiusChanged() override;
		int expectedSize() override;
		void buildPolygon() override;
	};
} // namespace rive

#endif