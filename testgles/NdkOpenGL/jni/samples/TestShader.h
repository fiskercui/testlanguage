#include "base/ccMacros.h"
#include "base/CCLog.h"
#include "base/CCGL.h"
#include "base/CCPlatformMacros.h"

class ShaderObject
{
public:
	void init(int width, int height);
	void draw();

	GLint render_model_matrix_loc;
	GLint render_projection_matrix_loc;
};
