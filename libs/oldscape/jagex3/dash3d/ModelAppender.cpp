// libs/oldscape/jagex3/dash3d/ModelAppender.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "ModelAppender.h"

namespace jag::oldscape::dash3d {
    // 0x10012a760: ModelAppender::~ModelAppender() has the same machine code as eastl::pair<Font const, shared_ptr<jstring::PixfontGeneric>>::~pair()

    // 0x10034bc80
    auto ModelAppender::Resolve() {
        uint8_t* groundDecor;
        long* plVar1;
        shared_ptr<Decor> local_30;

        if (field_24 == '\0') {
            field_24 = 1;
            groundDecor = &field_8;
            local_30 = shared_ptr(groundDecor);
            plVar1 = (long*)(*groundDecor).operator->();
            (**(void (**)(...))(*plVar1 + 200))(plVar1, &local_30, field_0);
            *groundDecor = local_30;
            AppendModels();
        }
        return auto(&field_8);
    }

    // 0x10034bd20
    void ModelAppender::AppendModels() {
        long* plVar2;
        uint64_t uVar3;
        unsigned long uVar4;
        unsigned long uVar5;

        if ((**(void (**)(...))field_0->field_0)() != 0) {
            uVar5 = 0;
            do {
                plVar2 = (long*)field_8.operator->();
                uVar3 = (**(void (**)(...))(field_0->field_0 + 16))(field_0, uVar5);
                (**(void (**)(...))(*plVar2 + 208))(plVar2, uVar3);
                uVar5 = uVar5 + 1;
                uVar4 = (**(void (**)(...))field_0->field_0)();
            } while (uVar5 < uVar4);
        }
    }

    // 0x10034bda0
    uint64_t SingleAppendList::Count() const {
        return 1;
    }

    // 0x10034bdb0
    ModelLit* SingleAppendList::GetBaseModel(unsigned long arg1) const {
        if (arg1 != 0) {
            LogAssert("index == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ModelAppender.cpp",
                      38, "Index was out-of-range.");
        }
        return m_pBaseModel;
    }

    // 0x10034bdf0
    ModelLit* SingleAppendList::GetTempModel(unsigned long arg1) {
        if (arg1 != 0) {
            LogAssert("index == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ModelAppender.cpp",
                      44, "Index was out-of-range.");
        }
        return m_pBaseModel;
    }

} // namespace jag::oldscape::dash3d

namespace jag {
    // 0x10034be30
    shared_ptr_if_not_array<oldscape::dash3d::ModelLitImpl>::type make_shared<oldscape::dash3d::ModelLitImpl>() {
        oldscape::dash3d::ModelLitImpl::Create<>();
    }

} // namespace jag
