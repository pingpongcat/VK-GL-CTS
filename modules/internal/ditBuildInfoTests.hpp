#ifndef _DITBUILDINFOTESTS_HPP
#define _DITBUILDINFOTESTS_HPP
/*-------------------------------------------------------------------------
 * drawElements Internal Test Module
 * ---------------------------------
 *
 * Copyright 2014 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 *//*!
 * \file
 * \brief Build information tests.
 *//*--------------------------------------------------------------------*/

#include "tcuDefs.hpp"
#include "tcuTestCase.hpp"

namespace dit
{

class BuildInfoTests : public tcu::TestCaseGroup
{
public:
    BuildInfoTests(tcu::TestContext &testCtx);
    ~BuildInfoTests(void);

    void init(void);
};

} // namespace dit

#endif // _DITBUILDINFOTESTS_HPP
