// libs/hal/render/shaders/ShaderProgramManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    class ShaderProgramManager {
    public:
        // virtual methods in vtable order
        virtual ~ShaderProgramManager();
        RegisterFromSourceString(char const*, char const*, VertexElementDesc const*, unsigned int, unsigned char);
        ShaderProgramManager* RegisterFromSourceString(char const*, char const*, VertexDeclaration const*,
                                                       unsigned char);
        RegisterFromSourceString(char const*, unsigned char);
        void Unregister(shared_ptr<ShaderProgram>&);
        void GarbageCollect();
        ShaderProgramManager(unsigned int);

        // data members, from how the methods use this: 112 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[104];
    };

    // 0x100c38d40, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ShaderProgramManager::ShaderProgramManager(unsigned int): jumps straight to the base-object constructor

    // 0x100c38d60, 80 bytes, base-object constructor, inline, placed by class name and debug map
    // ShaderProgramManager::ShaderProgramManager(unsigned int)
    void ShaderProgramManager::ShaderProgramManager(uint param_1) {
        new (this) Singleton<ShaderProgramManager>();
        field_0 = PTR_vtable_100ee8688 + 16;
        new (&field_8, param_1)
            ResourceList<unsigned long, ShaderProgram,
                         eastl::vector_map<
                             unsigned long, shared_ptr<ShaderProgram>, eastl::less<unsigned long>, eastl::allocator,
                             eastl::vector<eastl::pair<unsigned long, shared_ptr<ShaderProgram>>, eastl::allocator>>>();
    }

    // 0x100c38e10, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ShaderProgramManager::~ShaderProgramManager(): jumps straight to the base-object destructor

    // 0x100c38e20, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // ShaderProgramManager::~ShaderProgramManager()
    void ShaderProgramManager::~ShaderProgramManager() {
        ~ShaderProgramManager(this);
        operator_delete(this);
    }

    // 0x100c391a0, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // ShaderProgramManager::~ShaderProgramManager()
    void ShaderProgramManager::~ShaderProgramManager() {
        field_0 = PTR_vtable_100ee8688 + 16;
        (&field_8)->~ResourceList();
        ~AutoSingleton();
    }

} // namespace jag::render
