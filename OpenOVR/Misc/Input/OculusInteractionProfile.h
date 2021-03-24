//
// Created by ZNix on 24/03/2021.
//

#pragma once

#include "InteractionProfile.h"

class OculusTouchInteractionProfile : public InteractionProfile {
public:
	OculusTouchInteractionProfile();

	const std::string& GetPath() const override { return path; }
	const std::vector<std::string>& GetValidInputPaths() const override { return validInputPaths; }

	bool IsInputPathValid(const std::string& inputPath) const override { return validInputPathsSet.count(inputPath) > 0; }

private:
	std::string path;
	std::vector<std::string> validInputPaths;
	std::set<std::string> validInputPathsSet;
};
