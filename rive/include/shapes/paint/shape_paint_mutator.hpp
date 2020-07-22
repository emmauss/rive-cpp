#ifndef _RIVE_SHAPE_PAINT_MUTATOR_HPP_
#define _RIVE_SHAPE_PAINT_MUTATOR_HPP_

namespace rive
{
	class Component;
	class RenderPaint;
	class ShapePaintMutator
	{
	private:
		float m_RenderOpacity = 1.0f;
		RenderPaint* m_RenderPaint = nullptr;

	protected:
		/// Hook up this paint mutator as the mutator for the shape paint
		/// expected to be the parent.
		bool initPaintMutator(Component* parent);
		virtual void syncColor() = 0;

		RenderPaint* renderPaint() const { return m_RenderPaint; }

	public:
		float renderOpacity() const { return m_RenderOpacity; }
		void renderOpacity(float value);
	};
} // namespace rive
#endif