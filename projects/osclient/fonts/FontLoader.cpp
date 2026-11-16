// projects/osclient/fonts/FontLoader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "FontLoader.h"

namespace jag::oldscape {
    // 0x100068f90, 64 bytes, base-object constructor, placed by class name and debug map
    // FontLoader::FontLoader(jagex3::Js5*, jagex3::Js5*)
    void FontLoader::FontLoader(Js5* param_1, Js5* param_2) {
        allocator local_20[8];

        field_0 = param_1;
        field_8 = param_2;
        eastl::allocator::allocator(local_20, "EASTL hash_map");
        new (&field_16, local_20) eastl::hash_map<Font, shared_ptr<jstring::PixfontGeneric>, FontHash,
                                                  eastl::equal_to<Font>, eastl::allocator, false>();
    }

    // 0x100068fd0, 16 bytes, complete-object constructor, placed by class name and debug map
    // FontLoader::FontLoader(jagex3::Js5*, jagex3::Js5*): jumps straight to the base-object constructor

    // 0x100068fe0, 432 bytes, placed by class name and debug map
    // FontLoader::LoadFonts(Array<Font, eastl::allocator> const&)
    FontLoader* FontLoader::LoadFonts(Array* param_1) {
        hash_map<Font, shared_ptr<jstring::PixfontGeneric>, FontHash, eastl::equal_to<Font>, eastl::allocator, false>*
            this_00;
        bool bVar1;
        undefined4* puVar2;
        long lVar3;
        shared_ptr<jstring::PixfontGeneric>* psVar4;
        char* pcVar5;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* in_RDX;
        hashtable_iterator_base* extraout_RDX;
        allocator local_70[16];
        pixloader local_60;
        Array* local_48;
        FontLoader* local_40;
        undefined4 local_34;

        local_48 = param_1;
        eastl::allocator::allocator(local_70, "EASTL hash_map");
        local_40 = this;
        new (this) eastl::hash_map<Font, shared_ptr<jstring::PixfontGeneric>, FontHash, eastl::equal_to<Font>,
                                   eastl::allocator, false>(local_70);
        puVar2 = (undefined4*)in_RDX->data();
        local_60.field_16 = in_RDX->end();
        if (puVar2 != (undefined4*)local_60.field_16) {
            this_00 = (hash_map<Font, shared_ptr<jstring::PixfontGeneric>, FontHash, eastl::equal_to<Font>,
                                eastl::allocator, false>*)(local_48 + 16);
            do {
                local_34 = *puVar2;
                eastl::hashtable<Font, eastl::pair<Font_const, shared_ptr<jstring::PixfontGeneric>>, eastl::allocator,
                                 eastl::use_first<eastl::pair<Font_const, shared_ptr<jstring::PixfontGeneric>>>,
                                 eastl::equal_to<Font>, FontHash, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                 eastl::prime_rehash_policy, false, true, true>::find((Font*)local_70);
                eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                 eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                 eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                bVar1 = eastl::operator!=((eastl*)local_70, (hashtable_iterator_base*)&local_60, extraout_RDX);
                if (bVar1) {
                    lVar3 = local_70->HeapBeginPtr();
                    psVar4 = (shared_ptr<jstring::PixfontGeneric>*)eastl::hash_map<
                        Font, shared_ptr<jstring::PixfontGeneric>, FontHash, eastl::equal_to<Font>, eastl::allocator,
                        false>::operator[]((hash_map<Font, shared_ptr<jstring::PixfontGeneric>, FontHash,
                                                     eastl::equal_to<Font>, eastl::allocator, false>*)local_40,
                                           (Font*)&local_34);
                    shared_ptr<jstring::PixfontGeneric>::operator=(psVar4, (shared_ptr*)(lVar3 + 8));
                } else {
                    pcVar5 = (char*)GetStringName(local_34);
                    local_60.MakepixfontGeneric(*(Js5**)local_48, *(Js5**)(local_48 + 8), pcVar5, "");
                    bVar1 = operator!=((shared_ptr*)&local_60, (_func_decltype_nullptr*)0);
                    if (bVar1) {
                        psVar4 = (shared_ptr<jstring::PixfontGeneric>*)
                            eastl::hash_map<Font, shared_ptr<jstring::PixfontGeneric>, FontHash, eastl::equal_to<Font>,
                                            eastl::allocator, false>::operator[](this_00, (Font*)&local_34);
                        shared_ptr<jstring::PixfontGeneric>::operator=(psVar4, (shared_ptr*)&local_60);
                        psVar4 = (shared_ptr<jstring::PixfontGeneric>*)eastl::hash_map<
                            Font, shared_ptr<jstring::PixfontGeneric>, FontHash, eastl::equal_to<Font>,
                            eastl::allocator,
                            false>::operator[]((hash_map<Font, shared_ptr<jstring::PixfontGeneric>, FontHash,
                                                         eastl::equal_to<Font>, eastl::allocator, false>*)local_40,
                                               (Font*)&local_34);
                        shared_ptr<jstring::PixfontGeneric>::operator=(psVar4, (shared_ptr*)&local_60);
                    }
                    local_60.~shared_ptr();
                }
                puVar2 = puVar2 + 1;
            } while (puVar2 != (undefined4*)local_60.field_16);
        }
        return local_40;
    }

} // namespace jag::oldscape
