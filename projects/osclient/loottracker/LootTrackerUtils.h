// projects/osclient/loottracker/LootTrackerUtils.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::loottracker {
    class SourceItem {
    public:
        ~SourceItem();
        SourceItem();
        SourceItem(SourceItem const&);

        // data members, from how the methods use this: 48 bytes
        char _unknown_0[32];
        undefined8 field_32; // offset 32
        undefined4 field_40; // offset 40
        char _unknown_44[4];
    };

    // 0x10001d930, 16 bytes, inline, placed by debug map only (low confidence)
    // GetSourceCreateTableStatement()
    char* GetSourceCreateTableStatement() {
        return "CREATE TABLE IF NOT EXISTS source(sourceID INTEGER PRIMARY KEY AUTOINCREMENT, sourceName STRING, "
               "category INTEGER, level INTEGER, modified TIMESTAMP, uniqueIdentifier INTEGER)";
    }

    // 0x10001d940, 16 bytes, inline, placed by debug map only (low confidence)
    // GetLootCreateTableStatement()
    char* GetLootCreateTableStatement() {
        return "CREATE TABLE IF NOT EXISTS loot(ID INTEGER PRIMARY KEY AUTOINCREMENT, objectId INTEGER, count INTEGER, "
               "sourceName STRING, sourceID INTEGER, modified TIMESTAMP)";
    }

    // 0x10001d950, 16 bytes, inline, placed by debug map only (low confidence)
    // GetIgnoreItemCreateTableStatement()
    char* GetIgnoreItemCreateTableStatement() {
        return "CREATE TABLE IF NOT EXISTS ignoreLoot(ID INTEGER PRIMARY KEY AUTOINCREMENT, pattern STRING UNIQUE)";
    }

    // 0x10001d960, 16 bytes, inline, placed by debug map only (low confidence)
    // GetIgnoreSourceCreateTableStatement()
    char* GetIgnoreSourceCreateTableStatement() {
        return "CREATE TABLE IF NOT EXISTS ignoreSource(ID INTEGER PRIMARY KEY AUTOINCREMENT, pattern STRING UNIQUE)";
    }

    // 0x10001d970, 16 bytes, inline, placed by debug map only (low confidence)
    // GetLootTempTableStatement()
    char* GetLootTempTableStatement() {
        return "CREATE TABLE IF NOT EXISTS lootTemp(ID INTEGER PRIMARY KEY AUTOINCREMENT, objectId INTEGER UNIQUE, "
               "count INTEGER, sourceName STRING, sourceID INTEGER, modified TIMESTAMP)";
    }

    // 0x10001d980, 16 bytes, inline, placed by debug map only (low confidence)
    // GetSourceTempTableStatement()
    char* GetSourceTempTableStatement() {
        return "CREATE TABLE IF NOT EXISTS sourceTemp(ID INTEGER PRIMARY KEY AUTOINCREMENT, sourceID INTEGER, "
               "sourceName STRING, category INTEGER, level INTEGER, modified TIMESTAMP)";
    }

    // 0x1000ba730, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // SourceItem::SourceItem(SourceItem const&): jumps straight to the base-object constructor

} // namespace jag::oldscape::loottracker
