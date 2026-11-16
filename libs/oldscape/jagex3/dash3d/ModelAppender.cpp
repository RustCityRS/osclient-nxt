// libs/oldscape/jagex3/dash3d/ModelAppender.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "ModelAppender.h"

namespace jag::oldscape::dash3d {
    // 0x10012a760: the linker folded this into eastl::pair<Font const, shared_ptr<jstring::PixfontGeneric> >::~pair(), which has identical code
    ModelAppender::~ModelAppender();

    // 0x10034bc80, 160 bytes, placed by class name and debug map
    // ModelAppender::Resolve()
    ModelAppender* ModelAppender::Resolve() {
        undefined1* this_00;
        long* plVar1;
        ModelAppender* in_RSI;
        shared_ptr local_30;

        if (in_RSI->field_24 == '\0') {
            in_RSI->field_24 = 1;
            this_00 = &in_RSI->field_8;
            new (&local_30) shared_ptr<Decor>(this_00);
            plVar1 = (long*)shared_ptr<ModelLit>::operator->((shared_ptr<ModelLit>*)this_00);
            (**(code**)(*plVar1 + 200))(plVar1, &local_30, in_RSI->field_0);
            shared_ptr<ModelLit>::operator=((shared_ptr<ModelLit>*)this_00, &local_30);
            AppendModels(in_RSI);
            local_30.~shared_ptr();
        }
        new (this) shared_ptr<Decor>((shared_ptr*)&in_RSI->field_8);
        return this;
    }

    // 0x10034bd20, 128 bytes, placed by class name and debug map
    // ModelAppender::AppendModels()
    void ModelAppender::AppendModels() {
        long* plVar2;
        undefined8 uVar3;
        ulong uVar4;
        ulong uVar5;

        if ((**(code**)field_0->field_0)() != 0) {
            uVar5 = 0;
            do {
                plVar2 = (long*)shared_ptr<ModelLit>::operator->((shared_ptr<ModelLit>*)&field_8);
                uVar3 = (**(code**)(field_0->field_0 + 16))(field_0, uVar5);
                (**(code**)(*plVar2 + 208))(plVar2, uVar3);
                uVar5 = uVar5 + 1;
                uVar4 = (**(code**)field_0->field_0)();
            } while (uVar5 < uVar4);
        }
    }

    // 0x10034bda0, 16 bytes, placed by neighbouring functions
    // SingleAppendList::Count() const
    undefined8 SingleAppendList::Count() {
        return 1;
    }

    // 0x10034bdb0, 64 bytes, placed by debug map only (low confidence)
    // SingleAppendList::GetBaseModel(unsigned long) const
    ModelLit* SingleAppendList::GetBaseModel(ulong param_1) {
        if (param_1 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("index == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ModelAppender.cpp",
                      38, "Index was out-of-range.");
        }
        return m_pBaseModel;
    }

    // 0x10034bdf0, 64 bytes, placed by debug map only (low confidence)
    // SingleAppendList::GetTempModel(unsigned long)
    ModelLit* SingleAppendList::GetTempModel(ulong param_1) {
        if (param_1 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("index == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ModelAppender.cpp",
                      44, "Index was out-of-range.");
        }
        return m_pBaseModel;
    }

} // namespace jag::oldscape::dash3d

namespace jag {
    // 0x10034be30, 32 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::ModelLitImpl>::type make_shared<oldscape::dash3d::ModelLitImpl>()
    jag* make_shared<oldscape::dash3d::ModelLitImpl>() {
        ModelLitImpl* in_RSI;

        oldscape::dash3d::ModelLitImpl::Create<>((shared_ptr*)this, in_RSI);
        return this;
    }

} // namespace jag
