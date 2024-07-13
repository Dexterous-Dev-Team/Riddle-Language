//
// Created by wangz on 24-7-11.
//

#include "Unit.h"

#include "Tools/Setup.h"
#include <utility>

namespace Riddle {
    Unit::Unit(const std::string &selfPath) {
        this->selfPath= selfPath;
    }
    void Unit::addImports(const std::vector<std::string> &libs) {
        for(const auto &i: libs) {
            imports.push_back(i);
        }
    }
    void Unit::addImports(const std::string &lib) {
        imports.push_back(lib);
    }
    bool Unit::operator>(const Unit &x) {
        return this->imports.size() > x.imports.size();
    }
    bool Unit::operator<(const Unit &x) {
        return this->imports.size() < x.imports.size();
    }
    size_t Unit::getImportSize() {
        return imports.size();
    }
    void Unit::setPackName(std::string name) {
        this->packName= std::move(name);
    }
    std::string Unit::getPackName() {
        return packName;
    }
    std::string Unit::getSelfPath() {
        return selfPath;
    }
    void Unit::setSelfPath(std::string path) {
        selfPath= std::move(path);
    }
}// namespace Riddle