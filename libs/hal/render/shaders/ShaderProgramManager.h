// libs/hal/render/shaders/ShaderProgramManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    class ShaderProgramManager {
    public:
        // virtual methods in vtable order
        virtual ~ShaderProgramManager();
        auto RegisterFromSourceString(const char* str1, const char* str2, const VertexElementDesc* vertexElementDesc,
                                      unsigned int arg4, unsigned char arg5);
        auto RegisterFromSourceString(const char* str1, const char* str2, const VertexDeclaration* vertexDeclaration,
                                      unsigned char arg4);
        auto RegisterFromSourceString(const char* str, unsigned char arg2);
        void Unregister(shared_ptr<ShaderProgram>& shaderProgram);
        void GarbageCollect();
        ShaderProgramManager(unsigned int arg1);

    private:
        unsigned long field_8;
        uint8_t _unknown_16[96];
    };

    // 0x100c38d60
    ShaderProgramManager::ShaderProgramManager(unsigned int arg1) : Singleton<ShaderProgramManager>(), field_8(arg1) {}

    // 0x100c391a0
    ShaderProgramManager::~ShaderProgramManager() {}

} // namespace jag::render
