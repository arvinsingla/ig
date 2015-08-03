<div data-ng-app="eventApp" class="_event-wrapper" data-ng-controller="eventController">
<!--    <h2 ng-if="title">{{ title }}</h2>-->
<!--      <img class="_photo" ng-src="{{ items[currentItemIndex].item }}" />-->
<!--      <div class="_photo-details" ng-if="currentItemIndex === $index">-->
<!--        <div class="_avatar" ><img ng-src="{{ item.profilePicture }}"</div>-->
<!--        <div class="_caption" ng-show="items[currentItemIndex].title" animate-on-change="currentItemIndex" animation-class="-image-animation">{{ items[currentItemIndex].title }}</div>-->
<!--      </div>-->
<!--  <div class="_background" ng-style="{'background-image': 'url(' + items[currentItemIndex].item + ')'}"></div>-->
  <div class="_photo-wrapper" ng-repeat="item in items">
<!--    <img ng-if="$index === currentItemIndex" class="_photo-background" ng-src="{{ item.item }}" />-->
    <img ng-if="$index === currentItemIndex" class="_photo" ng-src="{{ item.item }}" />
  </div>
  <div class="_photo_details">
    <h1 class="_title">{{ title }}</h1>
    <div class="_hashtag">#{{ hashtag }}</div>
    <div class="_instructions">The instructions would go here</div>
    <img class="_avatar" ng-src="{{ items[currentItemIndex].profilePicture }}" />
    <div class="_caption">{{ items[currentItemIndex].title }}</div>
  </div>
<!--  animate-on-change="currentItemIndex" animation-class="-image-animation" -->
</div>
