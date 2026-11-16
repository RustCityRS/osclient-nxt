// libs/oldscape/jagex3/dash3d/ModelAppender.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape::dash3d {
    class ModelAppender {
    public:
        ModelAppender(shared_ptr<ModelLit>& modelLit, ModelAppendList& modelAppendList);
        ~ModelAppender();
        auto Resolve();
        void AppendModels();

    private:
        ModelAppendList* field_0;
        uint8_t _unknown_8[16];
        uint8_t field_24;
    };

    class SingleAppendList {
    public:
        // virtual methods in vtable order
        virtual uint64_t Count() const;
        virtual ModelLit* GetBaseModel(unsigned long arg1) const;
        virtual ModelLit* GetTempModel(unsigned long arg1);
        SingleAppendList(const ModelLit& modelLit);

    private:
        ModelLit* m_pBaseModel;
    };

    // 0x1001312f0
    ModelAppender::ModelAppender(shared_ptr<ModelLit>& modelLit, ModelAppendList& modelAppendList)
        : field_0(modelAppendList), field_8(modelLit), field_24(0) {}

} // namespace jag::oldscape::dash3d

namespace jag::graphics {
    // 0x10011c9a0: SkyBoxEntry::~SkyBoxEntry() has the same machine code as oldscape::dash3d::ModelAppender::~ModelAppender()

    // 0x10011c9a0: ViewportMapEntry::~ViewportMapEntry() has the same machine code as oldscape::dash3d::ModelAppender::~ModelAppender()

} // namespace jag::graphics

namespace jag {
    // 0x10011c9a0: Js5MemoryCacheWrapper::~Js5MemoryCacheWrapper() has the same machine code as oldscape::dash3d::ModelAppender::~ModelAppender()

} // namespace jag

namespace jag::game {
    // 0x10011c9a0: MapSquareEnvInfo::~MapSquareEnvInfo() has the same machine code as oldscape::dash3d::ModelAppender::~ModelAppender()

} // namespace jag::game
