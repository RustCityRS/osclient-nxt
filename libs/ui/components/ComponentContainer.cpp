// libs/ui/components/ComponentContainer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ComponentContainer.h"

namespace jag::ui {
    // 0x100009d50: the linker folded this into eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second(), which has identical code
    ComponentContainer::GetComponent() const;

    // 0x100023af0: the linker folded this into hal::Haptics::GetEnabled() const, which has identical code
    ComponentContainer::GetHidden() const;

    // 0x100023b60: the linker folded this into hal::Haptics::SetEnabled(bool), which has identical code
    ComponentContainer::SetHiddenUnsafe(bool);

    // 0x10011c9a0: the linker folded this into oldscape::dash3d::ModelAppender::~ModelAppender(), which has identical code
    ComponentContainer::~ComponentContainer();

    // 0x10012a760: the linker folded this into eastl::pair<oldscape::Font const, shared_ptr<oldscape::jstring::PixfontGeneric> >::~pair(), which has identical code
    ComponentContainer::~ComponentContainer();

    // 0x1002034d0: the linker folded this into SharedArray<unsigned int>::data(), which has identical code
    ComponentContainer::get() const;

    // 0x1002034d0: the linker folded this into SharedArray<unsigned int>::data(), which has identical code
    ComponentContainer::operator->() const;

    // 0x100694f60, 176 bytes, placed by debug map only (low confidence)
    // ComponentUtils::SetHiddenInStaticList(int, eastl::vector<ComponentContainer, eastl::allocator>&, bool)
    void ComponentUtils::SetHiddenInStaticList(int param_1, vector* param_2, bool param_3) {
        char cVar1;
        SharedArray<unsigned int>* this;
        SharedArray<unsigned int>* pSVar3;
        Component* this_00;

        this = (SharedArray<unsigned int>*)param_2->HeapBeginPtr();
        pSVar3 = (SharedArray<unsigned int>*)param_2->end();
        while (true) {
            if (this == pSVar3) {
                cVar1 = param_2->empty();
                if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("componentList.empty()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                              "ComponentContainer.cpp",
                              15, (char*)0);
                }
                return;
            }
            this_00 = (Component*)data();
            if (this_00->GetStaticID() == param_1)
                break;
            this = this + 24;
        }
        new (this) std::__cxx_atomic_base_impl<bool>(param_3);
    }

    // 0x100695010, 176 bytes, placed by debug map only (low confidence)
    // ComponentUtils::SetHiddenInDynamicList(int, eastl::vector<ComponentContainer, eastl::allocator>&, bool)
    void ComponentUtils::SetHiddenInDynamicList(int param_1, vector* param_2, bool param_3) {
        char cVar1;
        SharedArray<unsigned int>* this;
        SharedArray<unsigned int>* pSVar3;
        Component* this_00;

        this = (SharedArray<unsigned int>*)param_2->HeapBeginPtr();
        pSVar3 = (SharedArray<unsigned int>*)param_2->end();
        while (true) {
            if (this == pSVar3) {
                cVar1 = param_2->empty();
                if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("componentList.empty()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                              "ComponentContainer.cpp",
                              28, (char*)0);
                }
                return;
            }
            this_00 = (Component*)data();
            if (this_00->GetDynamicID() == param_1)
                break;
            this = this + 24;
        }
        new (this) std::__cxx_atomic_base_impl<bool>(param_3);
    }

    // 0x100696d40, 208 bytes, placed by debug map only (low confidence)
    // ComponentUtils::GetHiddenInDynamicList(int, eastl::vector<ComponentContainer, eastl::allocator> const&)
    ulong ComponentUtils::GetHiddenInDynamicList(int param_1, vector* param_2) {
        char cVar1;
        Skybox* this;
        Skybox* pSVar3;
        Component* this_00;
        undefined1 local_31;

        this = (Skybox*)param_2->HeapBeginPtr();
        pSVar3 = (Skybox*)param_2->end();
        do {
            if (this == pSVar3) {
            LAB_100696db7:
                if (this == pSVar3) {
                    cVar1 = param_2->empty();
                    local_31 = 1;
                    if (cVar1 == '\0') {
                        /* WARNING: Subroutine does not return */
                        LogAssert("componentList.empty()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                                  "ComponentContainer.cpp",
                                  40, (char*)0);
                    }
                }
                return CONCAT71((int7)((ulong)this >> 8), local_31) & 4294967041;
            }
            this_00 = (Component*)data();
            if (this_00->GetDynamicID() == param_1) {
                local_31 = ShowSkybox();
                goto LAB_100696db7;
            }
            this = (Skybox*)&field_24;
        } while (true);
    }

} // namespace jag::ui
