// libs/oldscape/jagex3/dash3d/ModelAppender.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape::dash3d {
    class ModelAppender {
    public:
        ModelAppender(shared_ptr<ModelLit>&, ModelAppendList&);
        ~ModelAppender();
        Resolve();
        void AppendModels();

        // data members, from how the methods use this: 25 bytes
        ModelAppendList* field_0; // offset 0
        char _unknown_8[16];
        undefined1 field_24; // offset 24
    };

    class SingleAppendList {
    public:
        // virtual methods in vtable order
        virtual Count() const;
        virtual ModelLit* GetBaseModel(unsigned long) const;
        virtual ModelLit* GetTempModel(unsigned long);
        SingleAppendList(ModelLit const&);

        // data members, from how the methods use this: 16 bytes
        undefined** field_0;    // offset 0, vtable pointer
        ModelLit* m_pBaseModel; // offset 8
    };

    // 0x10011c990, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ModelAppender::ModelAppender(shared_ptr<ModelLit>&, ModelAppendList&): jumps straight to the base-object constructor

    // 0x10011c9a0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ModelAppender::~ModelAppender(): jumps straight to the base-object destructor

    // 0x1001312f0, 32 bytes, base-object constructor, inline, placed by class name
    // ModelAppender::ModelAppender(shared_ptr<ModelLit>&, ModelAppendList&)
    void ModelAppender::ModelAppender(shared_ptr* param_1, ModelAppendList* param_2) {
        field_0 = param_2;
        new (&field_8, param_1) shared_ptr<Decor>();
        field_24 = 0;
    }

} // namespace jag::oldscape::dash3d

namespace jag::graphics {
    // 0x10011c9a0: the linker folded this into oldscape::dash3d::ModelAppender::~ModelAppender(), which has identical code
    SkyBoxEntry::~SkyBoxEntry();

    // 0x10011c9a0: the linker folded this into oldscape::dash3d::ModelAppender::~ModelAppender(), which has identical code
    ViewportMapEntry::~ViewportMapEntry();

} // namespace jag::graphics

namespace jag {
    // 0x10011c9a0: the linker folded this into oldscape::dash3d::ModelAppender::~ModelAppender(), which has identical code
    Js5MemoryCacheWrapper::~Js5MemoryCacheWrapper();

} // namespace jag

namespace jag::game {
    // 0x10011c9a0: the linker folded this into oldscape::dash3d::ModelAppender::~ModelAppender(), which has identical code
    MapSquareEnvInfo::~MapSquareEnvInfo();

} // namespace jag::game

namespace jag::oldscape {
    // 0x10011c9b0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // SpotAnimAppendList::~SpotAnimAppendList(): jumps straight to the base-object destructor

} // namespace jag::oldscape
