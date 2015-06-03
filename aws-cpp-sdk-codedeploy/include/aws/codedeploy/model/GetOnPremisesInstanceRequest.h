/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/codedeploy/codedeploy_EXPORTS.h>
#include <aws/codedeploy/codedeployRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace codedeploy
{
namespace Model
{

  /*
    <p>Represents the input of a get on-premises instance operation.</p>
  */
  class AWS_CODEDEPLOY_API GetOnPremisesInstanceRequest : public codedeployRequest
  {
  public:
    GetOnPremisesInstanceRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /*
     <p>The name of the on-premises instance to get information about</p>
    */
    inline const Aws::String& GetInstanceName() const{ return m_instanceName; }
    /*
     <p>The name of the on-premises instance to get information about</p>
    */
    inline void SetInstanceName(const Aws::String& value) { m_instanceName = value; }

    /*
     <p>The name of the on-premises instance to get information about</p>
    */
    inline void SetInstanceName(const char* value) { m_instanceName.assign(value); }

    /*
     <p>The name of the on-premises instance to get information about</p>
    */
    inline GetOnPremisesInstanceRequest&  WithInstanceName(const Aws::String& value) { SetInstanceName(value); return *this;}

    /*
     <p>The name of the on-premises instance to get information about</p>
    */
    inline GetOnPremisesInstanceRequest& WithInstanceName(const char* value) { SetInstanceName(value); return *this;}

  private:
    Aws::String m_instanceName;
  };

} // namespace Model
} // namespace codedeploy
} // namespace Aws