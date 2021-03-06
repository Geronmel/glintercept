#define GLI_INCLUDE_GL_NV_VIEWPORT_SWIZZLE

enum Main {

  GL_VIEWPORT_SWIZZLE_POSITIVE_X_NV       = 0x9350,
  GL_VIEWPORT_SWIZZLE_NEGATIVE_X_NV       = 0x9351,
  GL_VIEWPORT_SWIZZLE_POSITIVE_Y_NV       = 0x9352,
  GL_VIEWPORT_SWIZZLE_NEGATIVE_Y_NV       = 0x9353,
  GL_VIEWPORT_SWIZZLE_POSITIVE_Z_NV       = 0x9354,
  GL_VIEWPORT_SWIZZLE_NEGATIVE_Z_NV       = 0x9355,
  GL_VIEWPORT_SWIZZLE_POSITIVE_W_NV       = 0x9356,
  GL_VIEWPORT_SWIZZLE_NEGATIVE_W_NV       = 0x9357,
  GL_VIEWPORT_SWIZZLE_X_NV                = 0x9358,
  GL_VIEWPORT_SWIZZLE_Y_NV                = 0x9359,
  GL_VIEWPORT_SWIZZLE_Z_NV                = 0x935A,
  GL_VIEWPORT_SWIZZLE_W_NV                = 0x935B,

};

void glViewportSwizzleNV(GLuint index, GLenum[Main] swizzlex, GLenum[Main] swizzley, GLenum[Main] swizzlez, GLenum[Main] swizzlew);
