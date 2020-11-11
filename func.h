#pragma once
#include <string>

namespace bernd {

	class Base {
		public:
			Base();
			virtual ~Base();
			virtual void Say(const std::string& name) = 0;
	};

	class Hello : public Base {
		public:
			Hello();
			~Hello();
			void Say(const std::string& name) override;
	};

	class Moin : public Base {
		public:
			Moin();
			~Moin();
			void Say(const std::string& name) override;
	};

}
