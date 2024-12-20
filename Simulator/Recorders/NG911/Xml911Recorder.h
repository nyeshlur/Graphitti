/**
 * @file Xml911Recorder.h
 * 
 * @ingroup Simulator/Recorders
 *
 * @brief Header file for Xml911Recorder.h
 *
 * The Xml911Recorder provides a mechanism for recording vertex's layout,
 * and compile history information on xml file:
 *     -# vertex's locations, and type map,
 */

#pragma once

#include "Model.h"
#include "XmlRecorder.h"
#include <fstream>

class Xml911Recorder : public XmlRecorder {
public:
   /// The constructor and destructor
   Xml911Recorder() = default;

   ~Xml911Recorder() = default;

   static Recorder *Create()
   {
      return new Xml911Recorder();
   }

   /// Compile history information in every epoch
   ///
   /// @param[in] vertices   The entire list of vertices.
   virtual void compileHistories() override;

   /// Writes simulation results to an output destination.
   ///
   /// @param  vertices the Vertex list to search from.
   virtual void saveSimData() override;

   ///  Prints out all parameters to logging file.
   ///  Registered to OperationManager as Operation::printParameters
   virtual void printParameters() override;

private:
};
